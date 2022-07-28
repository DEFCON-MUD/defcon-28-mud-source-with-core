inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 9 }));
  set_short( "Corridor - x37y56z9" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y56z9.c",
  "south" : DIR+"/rooms/x37y55z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
