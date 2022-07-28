inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 0 }));
  set_short( "Hallway - x57y16z0" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y17z0.c",
  "south" : DIR+"/rooms/x57y15z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
