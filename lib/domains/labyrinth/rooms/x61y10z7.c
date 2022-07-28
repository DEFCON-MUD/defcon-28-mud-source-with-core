inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 7 }));
  set_short( "Corridor - x61y10z7" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y11z7.c",
  "south" : DIR+"/rooms/x61y9z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
