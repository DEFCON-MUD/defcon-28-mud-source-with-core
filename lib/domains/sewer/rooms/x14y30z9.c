inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 30, 9 }));
  set_short( "Hallway - x14y30z9" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y30z9.c",
  "east" : DIR+"/rooms/x15y30z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
