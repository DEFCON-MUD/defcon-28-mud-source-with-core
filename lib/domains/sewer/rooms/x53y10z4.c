inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 4 }));
  set_short( "Hallway - x53y10z4" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y10z4.c",
  "south" : DIR+"/rooms/x53y9z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
