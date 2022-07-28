inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 7 }));
  set_short( "Hallway - x27y8z7" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y8z7.c",
  "south" : DIR+"/rooms/x27y7z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
