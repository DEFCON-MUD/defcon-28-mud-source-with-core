inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 54, 9 }));
  set_short( "Passage - x29y54z9" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y54z9.c",
  "east" : DIR+"/rooms/x30y54z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
