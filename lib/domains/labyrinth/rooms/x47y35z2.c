inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 35, 2 }));
  set_short( "Corridor - x47y35z2" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y36z2.c",
  "south" : DIR+"/rooms/x47y34z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
