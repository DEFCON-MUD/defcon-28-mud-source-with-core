inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 29, 8 }));
  set_short( "Corridor - x57y29z8" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y30z8.c",
  "south" : DIR+"/rooms/x57y28z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
