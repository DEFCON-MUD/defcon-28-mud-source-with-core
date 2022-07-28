inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 6 }));
  set_short( "Corridor - x15y50z6" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y50z6.c",
  "east" : DIR+"/rooms/x16y50z6.c",
  "south" : DIR+"/rooms/x15y49z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
