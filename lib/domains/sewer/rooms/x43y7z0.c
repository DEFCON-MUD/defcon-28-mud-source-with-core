inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 7, 0 }));
  set_short( "Passage - x43y7z0" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y8z0.c",
  "south" : DIR+"/rooms/x43y6z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
