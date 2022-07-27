inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 37, 7 }));
  set_short( "Passage - x23y37z7" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y38z7.c",
  "south" : DIR+"/rooms/x23y36z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
