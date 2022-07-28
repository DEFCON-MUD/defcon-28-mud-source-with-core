inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 10, 7 }));
  set_short( "Passage - x54y10z7" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y10z7.c",
  "east" : DIR+"/rooms/x55y10z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
