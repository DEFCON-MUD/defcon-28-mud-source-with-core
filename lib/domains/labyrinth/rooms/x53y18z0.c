inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 0 }));
  set_short( "Corridor - x53y18z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y18z0.c",
  "east" : DIR+"/rooms/x54y18z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
