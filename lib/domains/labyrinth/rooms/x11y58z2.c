inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 58, 2 }));
  set_short( "Corridor - x11y58z2" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y58z2.c",
  "north" : DIR+"/rooms/x11y59z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
