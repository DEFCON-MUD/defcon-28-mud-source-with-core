inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 2 }));
  set_short( "Corridor - x27y26z2" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y26z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
