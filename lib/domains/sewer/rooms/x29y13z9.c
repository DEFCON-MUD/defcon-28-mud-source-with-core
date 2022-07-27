inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 13, 9 }));
  set_short( "Corridor - x29y13z9" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y14z9.c",
  "south" : DIR+"/rooms/x29y12z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
