inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 2 }));
  set_short( "Hallway - x37y26z2" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y26z2.c",
  "north" : DIR+"/rooms/x37y27z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
