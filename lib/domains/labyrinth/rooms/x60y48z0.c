inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 48, 0 }));
  set_short( "Corridor - x60y48z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y48z0.c",
  "east" : DIR+"/rooms/x61y48z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
