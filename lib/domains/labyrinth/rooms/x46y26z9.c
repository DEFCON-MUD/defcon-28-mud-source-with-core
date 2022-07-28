inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 26, 9 }));
  set_short( "Hallway - x46y26z9" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y26z9.c",
  "east" : DIR+"/rooms/x47y26z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
