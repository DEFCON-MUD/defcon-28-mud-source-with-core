inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 43, 2 }));
  set_short( "Passage - x3y43z2" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y44z2.c",
  "south" : DIR+"/rooms/x3y42z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
