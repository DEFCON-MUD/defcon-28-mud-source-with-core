inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 1 }));
  set_short( "Hallway - x53y52z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y52z1.c",
  "south" : DIR+"/rooms/x53y51z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
