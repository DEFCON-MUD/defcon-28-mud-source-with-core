inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 1 }));
  set_short( "Passage - x61y24z1" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y24z1.c",
  "north" : DIR+"/rooms/x61y25z1.c",
  "south" : DIR+"/rooms/x61y23z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
