inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 12, 6 }));
  set_short( "Corridor - x52y12z6" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y12z6.c",
  "east" : DIR+"/rooms/x53y12z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
