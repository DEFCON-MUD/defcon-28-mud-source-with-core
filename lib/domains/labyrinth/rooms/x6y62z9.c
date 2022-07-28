inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 62, 9 }));
  set_short( "Passage - x6y62z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y62z9.c",
  "east" : DIR+"/rooms/x7y62z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
