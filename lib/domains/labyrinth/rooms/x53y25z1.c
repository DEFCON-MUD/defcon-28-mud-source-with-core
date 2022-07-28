inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 1 }));
  set_short( "Corridor - x53y25z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z1.c",
  "south" : DIR+"/rooms/x53y24z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
