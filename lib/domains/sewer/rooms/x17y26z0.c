inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 0 }));
  set_short( "Passage - x17y26z0" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y26z0.c",
  "north" : DIR+"/rooms/x17y27z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
