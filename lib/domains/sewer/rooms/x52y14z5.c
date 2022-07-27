inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 14, 5 }));
  set_short( "Corridor - x52y14z5" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y14z5.c",
  "east" : DIR+"/rooms/x53y14z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
