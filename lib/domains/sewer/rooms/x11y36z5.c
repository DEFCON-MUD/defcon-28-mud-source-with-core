inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 5 }));
  set_short( "Hallway - x11y36z5" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z5.c",
  "north" : DIR+"/rooms/x11y37z5.c",
  "south" : DIR+"/rooms/x11y35z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
