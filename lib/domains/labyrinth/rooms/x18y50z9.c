inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 50, 9 }));
  set_short( "Hallway - x18y50z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y50z9.c",
  "east" : DIR+"/rooms/x19y50z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
