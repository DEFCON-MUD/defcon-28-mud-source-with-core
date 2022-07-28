inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 51, 7 }));
  set_short( "Corridor - x19y51z7" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y52z7.c",
  "south" : DIR+"/rooms/x19y50z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
