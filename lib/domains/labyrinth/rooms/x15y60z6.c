inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 60, 6 }));
  set_short( "Hallway - x15y60z6" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y60z6.c",
  "north" : DIR+"/rooms/x15y61z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
