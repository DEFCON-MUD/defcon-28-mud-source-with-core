inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 4 }));
  set_short( "Passage - x29y8z4" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y8z4.c",
  "east" : DIR+"/rooms/x30y8z4.c",
  "north" : DIR+"/rooms/x29y9z4.c",
  "south" : DIR+"/rooms/x29y7z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
