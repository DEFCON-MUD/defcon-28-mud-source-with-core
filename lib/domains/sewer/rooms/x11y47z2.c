inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 47, 2 }));
  set_short( "Corridor - x11y47z2" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y48z2.c",
  "south" : DIR+"/rooms/x11y46z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
