inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 50, 4 }));
  set_short( "Corridor - x48y50z4" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y50z4.c",
  "east" : DIR+"/rooms/x49y50z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
