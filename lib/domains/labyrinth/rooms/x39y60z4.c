inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 60, 4 }));
  set_short( "Corridor - x39y60z4" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y60z4.c",
  "south" : DIR+"/rooms/x39y59z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
