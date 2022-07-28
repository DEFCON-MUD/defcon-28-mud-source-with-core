inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 4 }));
  set_short( "Passage - x45y32z4" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y32z4.c",
  "east" : DIR+"/rooms/x46y32z4.c",
  "north" : DIR+"/rooms/x45y33z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
