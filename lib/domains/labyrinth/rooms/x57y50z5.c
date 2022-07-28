inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 5 }));
  set_short( "Corridor - x57y50z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y50z5.c",
  "north" : DIR+"/rooms/x57y51z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
