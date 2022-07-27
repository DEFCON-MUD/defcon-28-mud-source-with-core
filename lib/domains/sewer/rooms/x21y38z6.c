inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 6 }));
  set_short( "Corridor - x21y38z6" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y38z6.c",
  "south" : DIR+"/rooms/x21y37z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
