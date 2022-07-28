inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 7 }));
  set_short( "Corridor - x59y12z7" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y13z7.c",
  "south" : DIR+"/rooms/x59y11z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
