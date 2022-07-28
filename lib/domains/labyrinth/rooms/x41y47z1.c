inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 47, 1 }));
  set_short( "Hallway - x41y47z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y48z1.c",
  "south" : DIR+"/rooms/x41y46z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
