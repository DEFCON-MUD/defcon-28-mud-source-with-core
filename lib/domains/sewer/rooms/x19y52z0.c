inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 52, 0 }));
  set_short( "Passage - x19y52z0" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y52z0.c",
  "east" : DIR+"/rooms/x20y52z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
