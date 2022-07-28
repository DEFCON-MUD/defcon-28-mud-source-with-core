inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 0, 9 }));
  set_short( "Hallway - x17y0z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y0z9.c",
  "east" : DIR+"/rooms/x18y0z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
