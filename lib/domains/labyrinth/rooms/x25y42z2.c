inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 2 }));
  set_short( "Corridor - x25y42z2" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y42z2.c",
  "north" : DIR+"/rooms/x25y43z2.c",
  "south" : DIR+"/rooms/x25y41z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
