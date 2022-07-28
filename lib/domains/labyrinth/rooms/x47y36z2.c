inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 2 }));
  set_short( "Passage - x47y36z2" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y36z2.c",
  "south" : DIR+"/rooms/x47y35z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
