inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 7 }));
  set_short( "Passage - x15y26z7" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y26z7.c",
  "east" : DIR+"/rooms/x16y26z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
