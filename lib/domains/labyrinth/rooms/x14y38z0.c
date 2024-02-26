inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 38, 0 }));
  set_short( "Corridor - x14y38z0" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y38z0.c",
  "east" : DIR+"/rooms/x15y38z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
