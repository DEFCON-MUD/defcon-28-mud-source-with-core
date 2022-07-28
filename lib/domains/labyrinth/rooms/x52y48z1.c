inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 48, 1 }));
  set_short( "Passage - x52y48z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y48z1.c",
  "east" : DIR+"/rooms/x53y48z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
