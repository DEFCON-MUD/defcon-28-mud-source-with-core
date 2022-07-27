inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 2 }));
  set_short( "Passage - x53y6z2" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y6z2.c",
  "south" : DIR+"/rooms/x53y5z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
