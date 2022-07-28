inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 32, 4 }));
  set_short( "Corridor - x50y32z4" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y32z4.c",
  "east" : DIR+"/rooms/x51y32z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
