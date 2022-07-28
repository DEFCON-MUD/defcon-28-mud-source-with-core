inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 46, 8 }));
  set_short( "Passage - x54y46z8" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y46z8.c",
  "east" : DIR+"/rooms/x55y46z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
