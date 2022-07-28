inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 1 }));
  set_short( "Hallway - x39y8z1" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y8z1.c",
  "south" : DIR+"/rooms/x39y7z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
