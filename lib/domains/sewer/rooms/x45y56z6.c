inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 6 }));
  set_short( "Hallway - x45y56z6" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y56z6.c",
  "south" : DIR+"/rooms/x45y55z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
