inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 8 }));
  set_short( "Corridor - x29y14z8" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y14z8.c",
  "east" : DIR+"/rooms/x30y14z8.c",
  "north" : DIR+"/rooms/x29y15z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
