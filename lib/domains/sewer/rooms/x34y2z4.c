inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 2, 4 }));
  set_short( "Passage - x34y2z4" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y2z4.c",
  "east" : DIR+"/rooms/x35y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
